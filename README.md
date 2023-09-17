# program-ideas
An unordered list of program ideas that pop into my head, Serious and Stupid alike.  
If you happen to read this and want to make something before I get to it, go ahead! But please do PR with a link to it; I'd love to see it. Or if you're up to collab and do it together, even better.  

[brief ideas](#brief-ideas)  
[long ideas](#long-ideas)  
[done ideas](#done-ideas)
  

## brief ideas

- **Gode Boke Fynder** -- There are many medieval books. What if I've spent ages studying e.g. a book written in Cheshire, ~1100 A.D. I want to read more books in this dialect/time period? -- GUI showing UK map outline. Slider below. Move the slider, advance the year being shown by ~50 years. Display manuscripts and books written in this time period in the map with little clickable markers.  

- **Middle English Reader (serious)**
    * Gawain and Green Knight book. Great poetry. Hard to read! Many old words! What do?
    * Put the text in an app view. When hover over word, popup word and if click? TTS read out the word!
    * Also TTS read the whole story with settings ( see: [project MELT](https://vtechworks.lib.vt.edu/handle/10919/22059) )
    * could form the basis for making a large number of medieval English stories readable in their original form without the constant dictionary lookup problem or literary value-killing modernisations (even Tolkein modernisation insufficient)
    * There are problems with [orthographic regularity](https://quod.lib.umich.edu/m/middle-english-dictionary/dictionary/MED24418/track?counter=1&search_id=27705254)
    * There's an old english reader written in Swift [here](https://github.com/ryanlintott/OEVoice?fbclid=IwAR30SEB_dZxGobljGtt-fjcW9k73eneX6k3qcEG4fz6YrGM1uJ9iJdugCc8)
  
- **CLI menu framework** -- see how firebase has a scrolling options menu with a SPACE-to-select and ENTER-to-submit functionality? If not already done elsewhere, rebuild the skeleton and let users define their own options and submenus.  

- **page set saver** Imagine you need to work through a set of Github Issues. You won't have internet access. You don't just want to save one HTML page; you want to save an HTML page for /each link/ and save them all to a directory so you can go through them when you have no internet access. so, a program that saves the page you select, and also every linked page on that page, into a directory accessible by a root .html file.

- **bonfire** [A state snapshotting/system backup tool for a specific program](https://github.com/goodpals/bonfire), where the data location for that program is saved and can be restored if something breaks. Add a cute terminal art of a smoking bonfire like in Dark Souls.  

- **spoken extension to [symbolic notation converter](https://github.com/CallumBeaney/Symbolic-Notation-Converter)** -- Spoken english math to symbolic form. On device recognition not always 很好 so will need an external service like deepgram, so it will have to be either a premium service or make people supply their own api keys. Can fallback on ondevicerecognition. Aim at e.g. math teachers; need a way to not have painful install process.  

- **Targeted news searcher** - e.g. I want to know about some in-progress 六博-related research I'm interested in once it has been published, but I don't want to keep checking for it and parsing Mandarin with my dumb brain, so I need to do a cronjob once a day checking for specific keywords on core news sites or university bulletin boards and receiving an email or notification if anything comes up. Hard mode: make it work even without proxy on.

- **this thing**  ( see: [this](http://pixelastic.github.io/pokemonorbigdata/) )  
<img src="./1.png" style="width: 480px">

- **regex builder** -- use a basic AI tool to build regex pattern from spec from CLI.  

- **spoken extension to [symbolic notation converter](https://github.com/CallumBeaney/Symbolic-Notation-Converter)** -- Spoken english math to symbolic form. On device recognition not always 很好 so will need an external service like deepgram, so it will have to be either a premium service or make people supply their own api keys. Can fallback on ondevicerecognition. Aim at e.g. math teachers; need a way to not have painful install process.  
  
- **math & interesting historical counting system(s)**  [more here](https://osf.io/z9ux5)   
  Terminal programs, little websites. Focus on historical value. Try to use less familiar langs like Haskell or Julia.
  - [Cistercian Numerals](https://www.unicode.org/L2/L2020/20290-cistercian-digits.pdf)
  - [Mangarevan Binary](https://en.wikipedia.org/wiki/Mangareva#Binary_counting_system), [2](https://www.nature.com/articles/nature.2013.14380), [3](https://www.youtube.com/watch?v=hewNo1Qp9rg)  

- **business card scanner** -- and adds it to a database for later handling. Only advantage to to making this now might be it'd be FOSS where others are paid-for.

<br>

- **what's the weather like at {POSTCODE || CITY}?**  -- Another anti-google/cookies CLI tool. Might be nice project for people in an LDR with an LCD for a PICO with a battery and a wifi connection that shows both peoples' location info so they know what the climate's like where their partner is. Maybe make it easy for people to copy and build their own for their own portfolios so they can boost their chances.     

- [FUR BUILDER](https://callumbeaney.github.io/pages/singlesurface/singlesurface.html): generate a grid dynamically in a single page of [fur](http://kitagawakoji.com/fur.html). Use chess knight patterns. Pitch to Koji.  
<img src="https://callumbeaney.github.io/pages/singlesurface/img/5.jpg" alt="image" width="300">  
  
- **a diatonic harp tuner**  
Harpists usually use chromatic tuners but variable string numbers & ranges complicates things for beginners.  
`Webpage. Asks user if they know the most high & low pitches of their harp. If not: Requests low tone over microphone. Requests high tone over microphone. Generates a zoomable diatonic harp graphic (like the Guinness logo) the low:high-corresponding string range of which can be clicked to sound a MIDI tone`.  
  
- **pointers explained**  
A webpage that explains how pointers work in C graphically based on a user making subtle changes to the syntax in a pseudo code editor. Basically a quick type-along walkthrough to clear up terrible metaphors and show precisely what is happening on the language's own terms.
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
  ^^ alternatively, extend this by having a humorously willy-themed website that explains this  concept with graphic NSFW art called `*p is stored in the balls`.  
  
- **encrypter**  
Give a textInput some text & select a hashing algorithm from a dropdown e.g SHA-1, MD-5 etc and return the output.  

- **dynamic VPN** -- let's say you're in a country with a firewall. You need to access many sites, including pub.dev. pub.dev is **not** blocked in Country but facebook is. VPNs are slow. There is no need to load a pub.dev page instance through the VPN. Recognise pages that aren't blocked and load them through the native router. (there is an easier way to go about this but I'm curious how good this method actually would be)
    
- "**A historical language-related tool**  that I would like to see in the future, if possible, would be something that allows its users to look up more effectively spelling variants of the same words (always making reference to their first written attestantions too), or specific speech sounds, across different manuscripts from similar time ranges and geographic origins. That way, as I see it, it would be easier to see the spread of certain phonological changes, or how spelling standardisation comes about in this or that region or time." -- Effi96  
  
- **Night Sky** -- a terminal/GUI that basically maps the night sky's stars where the user is, and lets them explore it in glorious ASCII form. More art/cute than anything useful.  Check [this](https://astronomyapi.com) and [this](https://docs.astronomyapi.com/endpoints/bodies)
and Postman and research RapidAPI. And use [this](https://paw.cloud).  

- **"pawns"** which is chess, but only with pawns, and even though this is almost essentially checkers, you deliberately avoid that fact.  
    
- **GODE CODE** programming language. Python but middle english. Allows for multiple spellings just like the historical lexicography.   

- **府県 発音 guesser** building on [this](https://www.sporcle.com/games/JDGM/japan-prefecture-kanjihiragana-reading-clickable) project by Jim Miles with the extension I suggested in DMs: "split the screen up into X number of segments based on the number of kanji each place name has, and then lob the full set of on/kunyomi for each kanji's respective sections"  
  
- **Have A Word With Yourself** -- webapp that one would send to somebody being a fool on social that opens their front camera, shows them their own face, and puts up a text popup saying "have a word with yourself" (Andrew Maxwell on 810cats S14E8)  
  
- **LIU BO  六博**  --  ancient chess game. Reconstruct speculatively or wait till [This Research](https://www.zhihu.com/question/47845602) comes back.  

- **RE: PEOPLE** -- "Make this into a Slack plugin which checks your DMs and allows to do the same using Slack UI/commands. Now that would be a banger. Add Google Calendar integration and you have a product"

- **PICO motion activated speaker** that makes someone jump by playing a soundbite e.g. [this](https://www.youtube.com/watch?v=siLkbdVxntU) when someone trips it walking into a room etc etc. good motion sensor [here](https://www.tomshardware.com/how-to/raspberry-pi-pico-motion-sensor). Will need speaker & a Extend with battery supply.  
  
- **paste w/o formatting as default** -- no idea how to implement this but it should be the absolute standard.  
    
    <br>
    
## long ideas  

### Classical Chinese Reader     
Receives Chinese text and supplements reading with fast access to definitions & grammar glosses by clicking on hanzi or groups thereof.  
  
WHY  
Traditional dictionary lookup slow. Definitions sometimes don't explain classical grammar and usage clearly (no differentiation between modern usage and old).	There are mouse-mounted dictionaries such as Zhongwen. However, they do not differentiate between dictionaries and are extensions; program wanted.   
  
Probable Classical Chinese grammar is highlighted & when clicked user provided with glosses for truncations and modern analogues. Same for Historically-notable and significant references (names, phrases, hanzi with special connotations).  User can click on hanzi to get definitions and pronunciations in different dialects.  

<br>

### JAPANESE/CHINESE KANJI STUDIER  
“dismantles” a given Chinese character and provides glosses to a user such that they may comprehend its historical phonetic & linguistic changes through multiple East-Asian languages. In some ways this is Wikitionary but presented less noisy and slightly curated and without the faff of trying to remember how to spell wiktionary or wikitionary or wikititionary 
  
WHY  
English-speaking people learning either Japanese or Japanese & Chinese will benefit from knowing a Japanese loan-character’s predecessor. Chinese learners of Japanese often rely too heavily on assumptions they make about Japanese words and their meaning. Japanese students of Chinese will by virtue of their study benefit from a comprehensive resource, and understand pronunciation rules.  
   
<p>PROCESS</p><ol><li>Program receives a logogram. <ol> <li>OR word for the meaning of that character in EN/JP </li></ol><li>Program searches character against databases and retrieves and then displays the following information: <ol> <li>The same character <li>All alternative forms accessible in character sets e.g. Modern Japanese form, historical Japanese form, traditional Chinese form, Chinese simplified form. <li>Information: <ol> <li>Meaning in both languages <li>Written Pronunciations in both languages: <ol> <li>Japanese Kana and <a href="https://en.wikipedia.org/wiki/International_Phonetic_Alphabet">IPA</a> <li>Chinese’s Pinyin and IPA <li>Other dialects of Chinese e.g. Cantonese and IPA</li></ol> <li>A sound recording (internet access only) that generates a pronunciation of one of the above. <li>A graphic breakdown: <ol> <li>A breakdown of the character’s pronunciation in Chinese, giving access to the character’s individual components (radicals) and hanzi in that character’s phonetic series e.g. 見 俔 蜆 硯 哯 <li>A simultaneous comparison of pronunciations of the same Japanese characters [if a character is not used in Japanese, then skip over it but note its absence with a ＊]. </li></ol> <li>Examples of usages e.g. Japanese has multiple pronunciations; native Japanese appellations can be noted separately, as Chinese-derived pronunciations are the focus.</li></ol></li></ol><li>Program lays out in a simple user interface.</li></ol><p>The idea is that the program gives a LOT of information that can be selectively included in a user interface. This way, the way the word has been adopted into Japanese and the way the word’s meaning has changed can both be compared.</p>

<br>
  
## done ideas
  
  - Russian Peasant's algorithm ([DONE in C](https://github.com/CallumBeaney/Russian-Peasants-Algorithm))
  - Goldbach's Conjecture ([DONE in C](https://github.com/CallumBeaney/Goldbach-Checker))  
  - **age calculator** CLI Tool e.g. `howold 12/4/1974` -> outputs age. ([DONE in C and Dart](https://github.com/CallumBeaney/scripts/tree/master/ageCalculator))
  - **word counter** -- **howlong (CTRL+V)** ([DONE in C and Dart](https://github.com/CallumBeaney/scripts/tree/master/clipboardTextWordCounter))
  - Access Apple's system prefs programmatically to turn greyscale on and off ([DONE in Applescript and I'm never ever using it ever again WHY is every language ending in "Script" so utterly depraved jfc](https://github.com/CallumBeaney/scripts/tree/master/changeDisplayToMonochrome))
  - **Image to ascii** using [Braille](https://unicode.org/charts/nameslist/c_2800.html) `⠿⠽⠶⠭⠀`  or  `█▓▒░ `.  Braille unicode at sufficiently large sizes speculatively resembles offset printing however testing will be required. Export result as a PDF appropriately scaled so that it can be viewed like an image. ([DONE by TheZoraiz](https://github.com/TheZoraiz/ascii-image-converter#homebrew))
