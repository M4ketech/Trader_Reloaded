# Trader_Reloaded
Original mod from Dr_J0nes, last updated 15.02.2021

Installation Instructions for Server owners:
Make sure to have a look at the latest Update Notes when you already installed a previous Version!
1. Subscribe to the Mod here on Steam Workshop.
2. Navigate to your DayZ Root Folder.
3. Open the DayZLauncher.exe.
4. Close the DayZLauncher.exe.
5. Open the !Workshop Folder.
6. Copy the @Trader_Reloaded Folder.
7. Navigate to your DayZServer Root Folder.
8. Paste the @Trader_Reloaded Folder here.
9. Open the @Trader_Reloaded Folder.
10. Open the Keys Folder.
11. Copy the bikey File.
12. Navigate to your DayZServer Root Folder.
13. Open the keys Folder.
14. Paste the bikey File here.
15. Navigate to your DayZServer Root Folder.
16. Open the @Trader_Reloaded Folder.
17. Open the ServerProfile Folder.
18. Copy the Trader Folder.
19. Make sure you have setup a Profile Folder for your Server inside the Start Parameters
21. Navigate to the Profile Folder you have setup in the Server Start Parameters.
22. Paste the Trader Folder here.
23. Open the Batchfile to start the Server with an Texteditor.
24. Add @Trader_Reloaded to -mod= (if you are using multiple Mods look into the Mod Loading Info).

If you want to you can edit the configuration Files inside the Trader Folder to your likings or build whole new Tradercitys with it.

## Fix Vehicle despawning:

1. Go into your Server Root Folder.
2. Open the mpmissions Folder.
3. Open the Mission Folder your Server uses (default = dayzOffline.chernarusplus).
4. Open the db Folder.
5. Open the types.xml File with your favorit Text Editor.
6. Search for "OffroadHatchback".
7. Change <lifetime>3</lifetime> to <lifetime>3888000</lifetime>.

You can also Chnage the Lifetime of the "Paper" to 3 to get rid of all the Paper Trash in your Safezone.

## Added Classnames:
MoneyRuble1, MoneyRuble5, MoneyRuble10, MoneyRuble25, MoneyRuble50, MoneyRuble100, Hoodie_DrJ0nes, Hoodie_GraffitiTiles, Land_RoadCone

## Using non Character Traders:
To use Objects such as a Vending Machine or an Cashbox you need to add
```<ObjectAttachment> NPC_DUMMY```
to the
```<Object>```
Entry! This is needed to make the User Actions for the Trading Menu work on non Character Objects that act as Traders.
Example:
<```Object>             VendingMachine
<ObjectPosition>    3699.27,    402.13,     5967.91
<ObjectOrientation>    -13.234265, 0,            0
<ObjectAttachment>    NPC_DUMMY```

##Mod Loading Info:
If you are using multiple Mods they have to be seperated by an Semicolon ;
#Example: -mod=@Mod1;@Mod2;@Trader_Reloaded

I would also suggest to use Quotes ""
#Example: "-mod=@Mod1;@Mod2;@Trader_Reloaded"

Its important to have Mods loaded in the right Order to work properly!
The @Trader_Reloaded Mod should be the last Mod you load in most cases.


## Add the Currency to the Loottable:
1. Navigate to your DayZServer Root Folder.
2. Open the mpmissions Folder.
3. Open the dayzOffline.chernarusplus Folder
4. Open the db Folder.
5. Open the types.xml with your favorite Texteditor.
6. Point the Cursor between the two </type> at the end of the file.
7. Hit the Enter Key.
8. Paste this code in there:
```<type name="MoneyRuble1">
		<nominal>150</nominal>
		<lifetime>7200</lifetime>
		<restock>0</restock>
		<min>100</min>
		<quantmin>1</quantmin>
		<quantmax>100</quantmax>
		<cost>100</cost>
		<flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="0" deloot="0"/>
		<category name="tools"/>
		<tag name="shelves"/>
		<usage name="Town"/>
		<usage name="Village"/>
		<usage name="Hunting"/>
	</type>
```
9. Repeat the last Step but change the first Line to:
```
<type name="MoneyRuble5">
```
10. Repeat the last Step with all Money Ruble Classnames you want. See "Added Classnames" Topic here on this Page.
11. Save the File.

## Other Currencys
If you want to use other Currencys as the Rubles that come with the Trader Mod.

Setup Example for the Euro Currency:
You have to change the Currency Part of the TraderConfig.txt like this:
```
<CurrencyName> Euro
<Currency> Euro, 1
<Currency> Euro5, 5
<Currency> Euro10, 10
<Currency> Euro20, 20
<Currency> Euro50, 50
<Currency> Euro100, 100
```
Keep in Mind that you always need an Currency in the Config that is worth exactly 1!
Order matters! Lowest Worth first, highest Worth Last!

## Credits:
Credits go to Dr_J0nes who have done the Mod.
ComatoseBadger for the Ruble 3D-Model.
inkihh for the Key Lost Mechanic.
Translations: Avallanche, TH, many others I forgot the name unfortunately.. :/

## Special Thanks to:
Septic Falcon and Astley for testing on their Modded Server and all the Support!
Classified Rebel for testing DZSA Launcher automatic Mod downloading with me.
Everyone on the DayZ Modders Discord Server for helping me out with every Question I had!!!
DatLooter for all the support.
Of course everyone who helped me to test this Mod or reported Bugs!

# Boring Stuff Below

## Bohemia Interactive Studio TERMS! 
Workshop Contributions are Subscriptions, and therefore you agree that any Subscriber receiving distribution of your Workshop Contribution will have the same rights to use your Workshop Contribution (and will be subject to the same restrictions) as are set out in this Agreement for any other Subscriptions.

### User-created Content
If You create any content ("content") using the game or make it available through the game, You may do so, but there are rules.
This content must not infringe anyone's copyrights or author rights, it must not be offensive to people or illegal in any other way.
For the benefit of the entire User community, You give us an irrevocable permission to use, copy, modify and adapt anything You create using Our game and share with
other Users of Our game in multiplayer or as an online download (including but not limited to in-game objects or terrain composition).
You also agree that We allow other people to use, copy, modify and adapt Your content under the terms of this license.

www.bohemia.net/community/licenses/dayz-end-user-license

## Steam/Valve TERMS!
In steam workshop TOS it is stated that the developer of the game must give permission to sell mods, In Bohemia's tools policy it is stated that it is  forbidden to charge for mods and is also breaking direct TOS from the game developer thus breaking steam > workshop TOS as stated you need direct permission  from the developer and Bohemia has made the stance clear.

Specific Workshop-Enabled Apps or Workshop web pages may contain special terms (“App-Specific Terms”) that supplement or change the terms set out in this Section. In particular, where Workshop Contributions are distributed for a fee, App-Specific Terms will address how revenue may be shared. Unless otherwise specified in App-Specific Terms (if any), the following general rules apply to Workshop Contributions.

https://store.steampowered.com/subscriber_agreement/

## THE LAW!
In 1998, Congress enacted the Digital Millennium Copyright Act, 17 U.S.C. § 512 (the “DMCA”), to provide a framework for addressing claims of online copyright infringement.

Congress also recognized that these “takedown notices” could be used maliciously to secure the removal of content that was not legitimately claimed to be infringing. Accordingly, it included a provision in the DMCA authorizing those aggrieved by fraudulent notices to bring an action against the sender for damages.

Section 512(f) of the DMCA creates liability for knowingly making false claims in a DMCA takedown notice or counter-notice.
https://www.law.cornell.edu/uscode/text/17/512

If someone claims in a takedown notice that you are infringing their copyrighted material while knowing this to be false, then you can win damages from > them in a lawsuit. In recent years, the targets of wrongful takedowns have fought back and won damages and favorable settlements from individuals and > companies sending bogus takedown notices. For instance, in Online Policy Group v. Diebold, Inc., 337 F. Supp. 2d 1195 (N.D. Cal. 2004), two students and their ISP sued voting machine manufacturer Diebold after it tried to use DMCA takedown notices to disable access to Internet postings of the company's leaked internal email archive. The court granted summary judgment to the students and ISP on their claim, finding that portions of the email archive were so clearly subject to the fair use defense that "[n]o reasonable copyright holder could have believed that [they] were protected by copyright." According to the EFF, Diebold subsequently agreed to pay $125,000 in damages and fees to settle the lawsuit. For another example, see Crook v. 10 Zen Monkeys in our legal threats database. Someone who has sent a baseless takedown notice about your content may be more inclined to back off if you remind him or her about section 512(f) of the DMCA, in addition to sending a counter-notice.
