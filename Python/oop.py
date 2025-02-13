#Press Shift+Enter to run the code
class TextAnalyzer(object):
    
    def __init__ (self, text):
        # remove punctuation
        self.text = ((((text.replace('.', '')).replace(',','')).replace('!','')).replace('?','')).replace('&','')
        # make text lowercase
        self.text = self.text.lower()
        
    def freqAll(self):        
        # split text into words
        self.words = list(self.text.split(' '))
        # Create dictionary
        self.countDict = {}

        for i in range(0, len(self.words)):
            if self.words[i] in self.countDict:
                self.countDict[self.words[i]] += 1
            else:
                self.countDict[self.words[i]] = 1
        print(self.countDict)
        
    def freqOf(self,word):
        # get frequency map
        if word in self.countDict:
            print(f"Frequency of {word} is {self.countDict[word]}")
        else:
            print(f"{word} not found")
givenstring="Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?"

t1 = TextAnalyzer(givenstring)
t1.freqAll()
t1.freqOf('sed')
