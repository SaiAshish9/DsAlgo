def word_split(phrase,list,output=None):
    if output is None:
        output=[]

    for word in list:
        if phrase.startswith(word):
            output.append(word)

            return word_split(phrase[len(word):],list,output)
    return output

print(word_split('abcdef',['ab','cd']))
