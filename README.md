# Objektinis-Programavimas-3-oji-uzduotis

Programa, nuskaitanti vartotojo įvedamus, generuojamus (atskirus duomenis arba failus) arba iš failo perskaitomus duomenis ir pateikianti apskaičiuotus rezultatus
 
 ## Įdiegimo instrukcija 
Norint paleisti programos kodą reikia:
1. Atsisiųsti bet kurį iš pateiktų programos kodų 
   <br />[releases](https://github.com/Makstutyte/Objektinis-Programavimas-2-oji-uzduotis/releases) 
2. Įsidiegti C++ compiler 
   <br />[GCC](https://gcc.gnu.org/)
3. Naudojant komandinę eilutę paleisti programos kodą naudojant Makefile 
   * make
   * test
 
 
## Programos naudojimas ir apibendrintas veikimas 
Vartotojo veiksmų seka: 
1. Vartotojas pasirenka,  kokiame STL konteineryje (vector, list ar deque) bus saugomi duomenys
2. Vartotojas pasirenka ar bus generuojami nauji duomenų failai 
   *  sugeneravus failus vartotojas pasirenka, su kokiu failu bus toliau dirbama
   *  pasirinkus generavima vartotojas pasirenka kaip bus apskaičiuotas galutinis rezultatas (apskaičiuojant namų darbų balų vidurkį ar medianą)
   *  rezultatai bus rikiuojami pagal vardą ar galutinį balą
   *  išvedami duomenų failai bus suskirtomi naudojant 1-ąją ar 2-ąją strategiją
       *  pasirinkus STL konteinerį std::vector yra galimybė pasirinkti, jog išvedamų duomenų failai būtų sukuriami naudojant papildomus algoritmus
  
 #### Tuo atveju, jei pasirinkta, jog nebus genetuojami nauji duomenų failai
 
1. Vartotojas pasirenka ar duomenys bus įvedami ar skaitomi iš failo 
Pasirinkus duomenų įvedimą:

2. Vartotojas pasirenka, kokių būdu bus pateikiami namų darbų ir egzaminų rezultatai (atsitiktinai generuojant ar įvedant pačiam vartotojui) 
    * pasirinkus atsitiktinį generavimą, vartotojas nurodo, kiek balų bus sugeneruota
    * pasirinkus galimybę vartotojui pačiam įvesti namų darbų balus, įvedimo metu vartotojas nusprendžia kuomet jis jau įvedė visų namų           darbų rezultatus (įvedus nulį (0) yra sustabdomas balų įvedinėjimas)
3. Vartotojas pasirenka, kokių būdu bus apskaiciuojamas galutinis rezultatas (apskaičiuojant namų darbų balų vidurkį ar medianą)
4. Vartotojas pasirenka, kaip bus rikiuojami išvedami duomenys - pagal vardą ar galutinį balą
5. Vartotojas pasirenka, kelių mokinių duomenys bus naudojami programoje
6. Vartotojas įveda studentų vardus ir pavardes
7. Vartotojas pasirenka išvedami duomenų failai bus suskirtomi naudojant 1-ąją ar 2-ąją strategiją
   *  pasirinkus STL konteinerį std::vector yra galimybė pasirinkti, jog išvedamų duomenų failai būtų sukuriami naudojant papildomus algoritmus

Pasirinkus duomenų skaitymą:

2. Vartotojas pasirenka, iš kokio failo bus skaitomi duomenys (vienas iš pateiktų variantų)
3. Vartotojas pasirenka, kokių būdu bus apskaiciuojamas galutinis rezultatas (apskaičiuojant namų darbų balų vidurkį ar medianą)
4. Vartotojas pasirenka, kaip bus rikiuojami išvedami duomenys - pagal vardą ar galutinį balą
5. Vartotojas pasirenka išvedami duomenų failai bus suskirtomi naudojant 1-ąją ar 2-ąją strategiją
   *  pasirinkus STL konteinerį std::vector yra galimybė pasirinkti, jog išvedamų duomenų failai būtų sukuriami naudojant papildomus algoritmus


Po šios veiksmų sekos atspausdinami du .txt failai pagal galutinio balo rezultatą (jei galutinis balas >=5.0 duomenys išspausdinami į failą "vykeliai.txt", jei galutinis balas < 5.0  duomenys išspausdinami į failą "nevykeliai.txt"), nurodantys studentų vardus, pavardes ir galutinius rezultatus.

## Programos versijos v1.1 veikimo spartos analizė

Programos veikomo laikų ir naudojamų duomenų tipų palyginimas:

| Studentų įrašų kiekis | Struct | class | 
| ------------- | ------------- | ------------- |
| 100000  | 11.68695 | 9.85107 | 
| 1000000 | 29.8449 | 20.0486 | 
| 10000000  | 120.484 | 81.0496 | 


Programos veikimo laikų ir naudojant class duomenų tipą bei std::vector konteinerį palyginimas be ir su flag'ais:

| Studentų įrašų kiekis | class (be flag'ų) | -O1 | -O2 | -O3 |
| ------------- | ------------- | ------------- | ------------- | ------------- | 
| 100000  | 9.85107 | 9.1918 |  7.88156 | 6.04284 | 
| 1000000 | 20.0486 | 16.1624 | 15.1055 | 13.9243 |
| 10000000 | 81.0496  | 48.4198 | 46.6522 | 45.2916 |


## Ankstesnė užduotis
<br />[Objektinis-Programavimas-2-oji-uzduotis](https://github.com/Makstutyte/Objektinis-Programavimas-2-oji-uzduotis) 

## Releases 
<br />[v1.1](https://github.com/Makstutyte/OOP-3/releases/tag/v1.1.1) 
Pirmoji programos versija
* Patobulinta programa, kurioje:
   * vietoje struktūros (struct) duomenims saugoti yra taikomas klasės (class) duomenų tipas 
   * Klasėje (class) yra naudojamas konstruktorius ( constructor), destruktorius (destructor) bei get'eriai ir  set'eriai
   
<br />[v1.2](https://github.com/Makstutyte/OOP-3/releases/tag/v1.2)    
Antroji programos versija
* Patobulinimai programoje:
   * pritaikyta Rule of three 
   * pritaikyti papildomi operatoriai


