sample_num = input()

def RevOrdSwapCaps(inp):
        list_in = list(inp)
        out = list(inp)
        for i in range(len(inp)):
                out[len(inp)-1-i] = list_in[i]

        outstr = ""
        for alphabet in out:
                outstr += alphabet
        
        return outstr.swapcase()

for num in range(int(sample_num)):
        inp = input()
        print(RevOrdSwapCaps(inp))
