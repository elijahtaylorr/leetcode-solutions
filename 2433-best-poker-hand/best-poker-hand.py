class Solution(object):
    def bestHand(self, ranks, suits):
        if suits.count(suits[0]) == len(suits):
            return "Flush"
        elif (ranks.count(ranks[0]) >= 3 or ranks.count(ranks[1]) >= 3 or ranks.count(ranks[2]) >= 3):
            return "Three of a Kind"
        elif (ranks.count(ranks[0]) >= 2 or ranks.count(ranks[1]) >= 2 or ranks.count(ranks[2]) >= 2):
            return "Pair"
        else:
            return "High Card"
        