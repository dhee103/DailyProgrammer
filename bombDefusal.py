from sys import stdin

wires = stdin.read()

def bomb_defused(wires):
    cable = wires[0]
    return (
    (wires[0] == "red" && wires[1] == "green" && (wires[2] == "orange" || wires[2] == "white") ))

    red -> green -> orange | white
    orange -> red | black
    white -> !white | !black
    purple -> !purple | !green | !orange | !white

    return True

"bomb is defused" if bomb_defused(wires) else "boom"
