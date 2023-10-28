class Solution(object):
    def passThePillow(self, n, time):
        direction = "right"
        person = 1
        for seconds in range(time):
            if person == n and direction == "right":
                direction = "left"
            elif person == 1 and direction == "left":
                direction = "right"
            if direction == "right":
                person+= 1
            else:
                person-=1
        return person
            