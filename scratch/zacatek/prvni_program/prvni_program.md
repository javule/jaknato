# První program

---
### Co se naučíme:
Úplně první lekce, seznámení se se Scratch editorem.    
Tady byste měli začít, pokud o Scratchi netušíte vůbec nic

* seznámíme se s jednotlivými částmi editoru
* pozadí, postavy, scénáře 
* události <sb>when this sprite clicked</sb>, <sb>when [ mezera v] key pressed</sb>, <sb>when @greenFlag clicked</sb> 
* kostýmy, zvuky

---

## Scratch editor
### Scéna
Po spuštění Scratche se před námi objeví editor rozdělený na několik částí:    
![](editor_nepopsany.png)    

Vlevo nahoře je velká bílá plocha, které říkáme *scéna*. Je to prostor, na kterém se odehrává to, co jsme naprogramovali. Po scéně se pohybují postavy z *ohrádky* pod scénou a scéně také lze nastavit pozadí. 

### Pozadí

Obrázek pozadí scény se nastavuje vlevo dole. Vybrat si můžeme z hotových obrázků z knihovny pozadí, nebo si pozadí namalujeme. Je možné si nahrát do pozadí obrázek uložený v počítači, nebo se vyfotit kamerou.    
Nový obrázek se přidává těmito ikonami ![](volba_pozadi.png).    
Obrázků pozadí si můžeme do projektu nahrát několik, zobrazovat se bude vždy ten, který je v záložce *Pozadí* v pravé části editoru vybraný.
![](pozadi_aktivni.png)  

Pozadí ve Scratchi ale není jen soubor obrázků. Jeho součástí je i **kód (*Scénáře*)**, který určuje jeho chování, a ***zvuky***, které program pozadí může spouštět. Časem se naučíme ovládat pozadí i programem.

<div class="poznamka" markdown="1">
:bulb: **Úkol 1. Vyberte si pěkné pozadí pro naše první pokusy**
</div>

### Postavy
Postavy, které chceme v našem programu "zapojit do hry", musíme nejprve přidat do *ohrádky pro postavy*, která se nachází pod scénou. Postavu si opět můžeme vybrat už hotovou z knihovny, nebo si namalovat vlastní.

<div class="poznamka" markdown="1">
:bulb: **Úkol 2. Přidejte do ohrádky ještě jednu postavu z knihovny postav**
</div>

Stejně, jako je tomu u pozadí, **je součástí postavy** její **vzhled (*Kostýmy*)**, její **kód (*Scénáře*)**, který určuje její chování za běhu programu, a její ***Zvuky***, které lze používat v programu.

### Scénáře

Každé postavě zvlášť, i pozadí, lze naprogramovat, co bude na scéně po spuštění programu dělat. Aby se postava chovala tak, jak chceme, musíme jí to říct jazykem, kterému rozumí.    
Všechny příkazy, které postava zná, najdeme v záložce *Scénáře* uprostřed editoru, roztříděné do složek podle oblastí, kterých se týkají.

![](scenare.png)

 
<div class="poznamka"><b>Poznámka:</b> Stále dokola budu v obrázcích i textu upozorňovat na to, že <b>před tím, než začneme upravovat kód, kostýmy, či zvuky, je třeba vybrat v ohrádce postavu (pozadí), které se to týká</b>. Začátečníkům se velmi často stává, že napíší program nebo přidají zvuky do jiné postavy, než zamýšleli.<br/> <b>Až ve vás hrkne, že vám zmizel program, zkontrolujte nejdřív, že se nacházíte v postavě, ve které jste ho psali.</b>
</div>

Příkazy ze složek vybíráme myší a přetahujeme na plochu vpravo. Řadíme je za sebe v pořadí, ve kterém chceme, aby byly vykonávány a spojujeme k sobě jako puzzle.    
Pokud se nám vybraný příkaz nehodí, smažeme ho tak, že ho prostě vrátíme myší zpět do nabídky příkazů.

<div class="poznamka" markdown="1">
:bulb: **Úkol 3. Najděte v nabídce příkazů následující příkazy: <sb>move (10) steps</sb>, <sb> say [Hello] for (2) secs</sb>, <sb>wait (1) secs</sb>,  <sb>hide</sb>, <sb>show</sb>. Příkaz přetáhněte myší do prostoru pro scénáře a dvojklikem na příkaz ho spusťte.
<br/>Zkoušejte spojovat příkazy za sebe a dvojklikem spouštět.**
</div>


<div class="poznamka" markdown="1"><b>Poznámka:</b> Všiměte si, že příkazy mají vždy stejnou barvu, jako složka, ve které se nacházejí. Napoví vám to později, ve které složce máte příkaz, který uvidíte v návodu, hledat.
</div>

### Události
To, kdy bude který příkaz či sekvence příkazů spuštěna řídí *události*. Událostí je třeba spuštění programu, zmáčknutí klávesy, kliknutí myší... Rozklikněte záložku ![](/scratch/images/udalosti.png) a uvidíte, které události Scratch nabízí.

Zatím nám budou bohatě stačit první 3: <sb>when this sprite clicked</sb>, <sb>when [ mezera v] key pressed</sb>, <sb>when @greenFlag clicked</sb>. 

Události mají tvar hnědé čepice, která se z vrchu přilepí k sekvenci příkazů a určí tím, kdy má být vykonávána.

Tento kus kódu říká postavě, že pokaždé, když zmáčkneme mezeru, se má posunout o 10 kroků:

```blocks

when [ mezera v] key pressed
move (10) steps
```
### První program

<div class="poznamka" markdown="1" >
:feet: **Krok za krokem**

 <b>Vytvoříme náš první program. Po spuštění nás postavička pozdraví. Bude se pohybovat vpravo/vlevo po stisknutí příslušné klávesy:</b>

 <iframe allowtransparency="true" width="485" height="402" src="//scratch.mit.edu/projects/embed/210821336/?autostart=false" frameborder="0" allowfullscreen></iframe>

 [Program na stránkách scratch.mit.edu](https://scratch.mit.edu/projects/210821336)

Z minulých úkolů už máme nastavené krásné pozadí a dvě postavy na scéně. 
#### Pozdrav   
**Vybereme postavu kocoura** a na plochu pro scénáře přetáhneme ze záložky ![](/scratch/images/vzhled.png) příkaz <sb> say [Hello] for (2) secs</sb>. Příkaz upravíme na <sb> say [Ahoj] for (5) secs</sb>.    
Ze záložky ![](/scratch/images/udalosti.png) vybereme událost <sb>when @greenFlag clicked</sb> a přilepíme k předchozímu příkazu.    
<code class="language-blocks">
when @greenFlag clicked
say [Ahoj] for (5) secs
</code>
A máme kocoura, který nás po spuštění programu vlaječkou pozdraví!

#### Pohyb
Pokud chceme, aby šel kocour doprava, nejprve ho tam musíme nasměrovat přikazem <sb>point in direction(90 v)</sb>. Teprve potom tam kocoura můžeme poslat: <sb>move (10) steps</sb>. K tomu všemu přilepíme čepici <sb>when [ šipka vpravo v] key pressed</sb>. 
<code class="language-blocks">
when [ šipka vpravo v] key pressed
point in direction(90 v)
move (10) steps
</code>
A Skrečák už se sune doprava.

Stejným způsobem uděláme i pohyb vlevo:
<code class="language-blocks">
when [ šipka vlevo v] key pressed
point in direction(-90 v)
move (10) steps
</code>
Program vyzkoušejte. Zmáčkněte zelenou vlajku a zkoušejte mačkat klávesy šipka vpravo a vlevo.    
Program vypadá vcelku slušně, jedinou vadou na kráse je, že doleva nám kocour běhá jaksi po hlavě..

Každé postavě můžeme nastavit způsob, jakým se má otáčet. Dokola jako korouhvička, jen doprava/doleva a nebo vůbec. Správné otáčení Skrečáka nám zajistí příkaz <sb>set rotation style[jen vlevo-vpravo v]</sb>. Příkaz přidáme k události <sb>when @greenFlag clicked</sb>, aby se postavě nastavila tato vlastnost hned po startu programu. 
<code class="language-blocks">
when @greenFlag clicked
set rotation style[jen vlevo-vpravo v]
say [Ahoj] for (5) secs
</code>  
Až spustíte program vlajkou příště, kocour už se bude chovat tak, jak má. 
</div>

    
### Kostýmy

Každá postava může mít libovolné množství kostýmů, do kterých se může "převlékat". Vybraný kostým určuje vzhled postavy. Abychom se mohli podívat na kostýmy postavy, **vybereme postavu, jejíž kostýmy chceme vidět** a vybereme záložku *Kostýmy* v pravé půlce editoru. V pravé části editoru se zobrazí vše, co je třeba k editaci kostýmů.

![](kostymy.png)

Z obrázku vidíme, že kocour Skrečák má kostýmy dva.

Když bychom kocourovi smazali všechny jeho kostýmy a nahráli mu kostýmy třeba baletky, bude jednoduše vypadat v našem programu jako baletka, ale chovat se bude dál tak, jak jsme ho naprogramovali předtím.

Kostýmy se mažou a kopírují po stisknutí pravého tlačítka myši nad kostýmem.

![](editace_kostymu.png)

<div class="poznamka" markdown="1">
:bulb: **Úkol 4: Smažte jeden kostým kocoura, druhý zkopírujte a kopii dokreslete zavřené oko nebo vyplázlý jazyk** 
</div>
<div class="poznamka" markdown="1">
<b>Poznámka:</b> Pokud by se vám obrázek upravoval špatně, můžete si ho převést z vektorového režimu na bitmapu (vpravo dole): ![](na_bitmapu.png)
</div>

### Mrkací program

<div class="poznamka" markdown="1" >
:feet: **Krok za krokem**

 <b>Chceme, aby naše postava z minulých cvičení zamrkala (nebo vyplázla jazyk), když na ni klikneme myší:</b> 

  <iframe allowtransparency="true" width="485" height="402" src="//scratch.mit.edu/projects/embed/210922318/?autostart=false" frameborder="0" allowfullscreen></iframe>
  
 [Program na stránkách scratch.mit.edu](https://scratch.mit.edu/projects/210922318/)

 Vezmeme projekt, na kterém jsme pracovali v minulých cvičeních a vylepšíme ho o mrkání.

 Událostí, na kterou bude postava nově reagovat je <sb>when this sprite clicked</sb>. Opět najdeme ve složce ![](/scratch/images/udalosti.png).

 Mrkání zařídíme tak, že změníme postavě na chviličku kostým. Místo kostýmu s otevřenýma očima bude mít kostým s okem zavřeným a za moment zas vrátíme kostým původní.

Změnu kostýmu provede příkaz <sb>switch costume to [ v]</sb>
ze záložky ![](/scratch/images/vzhled.png). Z nabídky kostýmů v příkazu vybereme ten se zavřeným okem. Pak musíme chvilku počkat, aby si lidské oko vůbec stihlo všimnout, že se změnil kostým. To zajistí příkaz <sb>wait () secs</sb>. Pak postavě vrátíme její původní kostým:
<code class="language-blocks">
when this sprite clicked
switch costume to [oko v]
wait (0.2) secs
switch costume to [kostým1 v]
</code>
    
Ještě by to chtělo se ujistit, že program bude startovat s kocourem s oběma očima otevřenýma.    
Upravíme kód v události <sb>when @greenFlag clicked</sb>:
<code class="language-blocks">
when @greenFlag clicked
set rotation style[jen vlevo-vpravo v]
switch costume to [kostým1 v]
say [Ahoj] for (5) secs
</code>  
Program ozkoušejte.
 </div>


### Zvuky
Když budeme chtít, aby naše postavy vydávaly nějaké zvuky, musíme jim nejprve zvuky přidat do jejich záložky zvuků.
**Vybereme postavu, které chceme přidávat zvuky**, a vybereme záložku *Zvuky*. V pravé časti se objeví editor zvuku.

![](zvuk.png)

Zvuky opět můžeme, stejně jako kostýmy, přidávat z knihovny hotových zvuků, nebo si můžeme nahrát vlastní.

<div class="poznamka" markdown="1">
:bulb: **Úkol 5: Přidejte postavě kocoura zvuk, který sami nahrajete** 
</div>

### Program se zvuky

<div class="poznamka" markdown="1" >
:feet: **Krok za krokem**

 <b>Chceme, aby kocour zamňoukal, když na něj klikneme myší:</b> 

<iframe allowtransparency="true" width="485" height="402" src="//scratch.mit.edu/projects/embed/210996855/?autostart=false" frameborder="0" allowfullscreen>
</iframe>
    
[Program na stránkách scratch.mit.edu](https://scratch.mit.edu/projects/210996855/)

Tentokrát bude úprava kódu minulého programu velmi jednoduchá. V záložce ![](/scratch/images/zvuky.png) vybereme 
příkaz <sb>play sound [mňau v]</sb> a připojíme ho pod událost <sb>when this sprite clicked</sb>.    
Upravený kód bude vypadat následovně:

<code class="language-blocks">
when this sprite clicked
play sound [mňau v]
switch costume to [oko v]
wait (0.2) secs
switch costume to [kostým1 v]
</code>

</div>

Asi jste si při zkoušení programu všimli, že záložka ![](/scratch/images/zvuky.png) nabízí na přehrávání zvuku příkazy dva: <sb>play sound [mňau v]</sb> a <sb>play sound [mňau v] until done</sb>.

Rozdíl mezi nimi je následující:

Příkaz <sb>play sound [mňau v] until done</sb>:    
Ve chvíli, kdy program doběhne k tomuto příkazu, se spustí přehrávání vybraného zvuku a program pokračuje dalším příkazem až ve chvíli, kdy zvuk dohraje

Příkaz <sb>play sound [mňau v]</sb>:    
Program doběhne k tomuto příkazu, spustí přehrávání zvuku a zatímco zvuk hraje, program pokračuje dal.


<div class="poznamka" markdown="1">
:bulb: **Úkol 6: Rozhodněte, který z příkazů popsaných v předchozí poznámce použijete, pokud chcete, aby kocour třikrát za sebou zamňoukal**     
Pokud nevíte, zkuste naprogramovat obě varianty.
</div>

<div class="poznamka" markdown="1">
:bulb: **Úkol 7: Rozhodněte, který z příkazů popsaných v předchozí poznámce použijete, pokud chcete, aby kocour zamňoukal a hýbal u toho pusou**    
Pokud nevíte, zkuste naprogramovat obě varianty.
</div>

 