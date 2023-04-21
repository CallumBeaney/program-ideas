# program-ideas
An unordered list of program ideas that pop into my head, Serious and Stupid alike.

### webpages
- **a diatonic harp tuner**  
Harpists usually use chromatic tuners but variable string numbers & ranges complicates things for beginners.  
Webpage. Asks user if they know the most high & low pitches of their harp. If not: Requests low tone over microphone. Requests high tone over microphone. Generates a zoomable diatonic harp graphic (like the Guinness logo) the low:high-corresponding string range of which can be clicked to sound a MIDI tone.  

- **encrypter**  
Give a textInput some text & select a hashing algorithm from a dropdown e.g SHA-1, MD-5 etc and return the output.
  
- **pointers explained**  
A webpage that explains how pointers work in C graphically based on a user making subtle changes to the syntax. Basically a quick type-along walkthrough to clear up terrible metaphors and show precisely what is happening on the language's own terms.
```              
    int(*p)[5] = &a; // use & and whole array is called
    where VARIABLE in [ printf("%d", VARIABLE); ] is one of the 3 below "p" declarations.

              **p
     ┌────────┼───────────────────────────┐
     │        │                           │
     │     ┌──┼─┬────┬────┬────┬────┐     │
   a │     │  ▼ │    │    │    │    │     │
     │     └────┴────┴────┴────┴────┘     │
     │     ▲                              │
     └─────┼──────────────────────────────┘
     ▲     │
     │     └───────────┐
     p                *p
```
  
### CLI tools
- **bonfire** a terminal art/thing that displays a small bonfire animation from Dark Souls with a randomly pulled message from the game. Purely graphical: a kind of relaxing "take a break" thing? OR takes a snapshot of a particular state of the OS or a program. 
- **Image to ascii** using [Braille](https://unicode.org/charts/nameslist/c_2800.html) `⠿⠽⠶⠭⠀`  or  `█▓▒░ `.  Braille unicode at sufficiently large sizes speculatively resembles offset printing however testing will be required. Export result as a PDF appropriately scaled so that it can be viewed like an image.
- **age calculator** e.g. `howold 12/4/1974` -> outputs age
  
  
### requests
- "**A historical language-related tool**  that I would like to see in the future, if possible, would be something that allows its users to look up more effectively spelling variants of the same words (always making reference to their first written attestantions too), or specific speech sounds, across different manuscripts from similar time ranges and geographic origins. That way, as I see it, it would be easier to see the spread of certain phonological changes, or how spelling standardisation comes about in this or that region or time." -- Effi96  
  
  
### misc
- **GODE CODE** programming language. Python but middle english. Allows for multiple spellings just like the historical lexicography. 
