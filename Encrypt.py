def Encrypt():
    import math
    txt = input("Encrypt: ")
    final_construct = []

    def unicode_of(txt):
        return [ord(char) for char in txt]
    global UC, ID

    UC = []
    UC = unicode_of(txt)
    ID = math.sqrt(2)

    for i in range(1, len(txt) + 1):
        RES = 4 * (math.sqrt(ID) ** 1.5)
        EST = round((ID * (RES ** 2)) / (0.2 * ((ID / i) * ID * UC[(i - 1)])))
        final_construct.append(EST)
    final = "".join(final_construct)
    return final







