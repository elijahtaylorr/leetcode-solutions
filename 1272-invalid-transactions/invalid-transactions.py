class Solution:
    def invalidTransactions(self, transactions):
	
		# include original index i in transactions as the indices will get messed up
		# after sorting
        def _decode_transaction(transaction, i):
            name, time, amount, city = transaction.split(",")
            return [name, int(time), int(amount), city, i] 

		# Python's sorting is stable, so after the second sort by names the relative
		# time-order will remain within items under the same name
        trans_fields = [_decode_transaction(t, i) for i, t in enumerate(transactions)]
        trans_fields.sort(key=itemgetter(1))  # sort by times
        trans_fields.sort(key=itemgetter(0))  # sort by names

		# set of indices to
		# - avoid duplicates: no transaction booked twice
		# - and include identicals: identical transactions with different indices
		# at the same time
        invalids = set()
		
        n = len(transactions)
        for i in range(n):
            name1, time1, amount1, city1, i1 = trans_fields[i]
            if amount1 > 1000:
                invalids.add(i1)
            for j in range(i + 1, n):
                name2, time2, _, city2, i2 = trans_fields[j]
                if name1 != name2:
                    break
                if time2 - time1 <= 60 and city1 != city2:
                    invalids.add(i1)
                    invalids.add(i2)
        return [transactions[i] for i in invalids]