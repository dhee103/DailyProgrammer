import re

while True:

    source = input()
    target = input()

    # if len(target) > len(source) return false
    # for each letter in target search for it in source, if present remove it
    # check if the source and original difference in lengths are the same

    def rack_management(source, target):
        diff = len(source) - len(target)
        if (diff < 0):
            return False
        for letter in target:
            source = re.sub(re.escape(letter), "", source, 1)
        return (len(source) == diff)

    print(rack_management(source, target))
