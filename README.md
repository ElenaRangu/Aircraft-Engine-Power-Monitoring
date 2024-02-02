# Monitorizarea-puterii-unui-motor-de-avion


1. Valorile senzorilor sunt citite la intervale de o secunda
2. Toate valorile citite trebuie sa fie intr-un interval predefinit. Valorile in afara intervalului sunt
ignorate.
3. Cand trei citiri succesive ale unui senzor genereaza valori in afara intervalului predefinit un led,
ce corespunde senzorului respectiv, isi schimba culoarea din verde in rosu (se genereaza ERROR)
4. In functie de valorile citite se pot genera semnale WARNING sau ALARM
5. Cand un semnal WARNING este generat un led isi schimba culoarea din verde in rosu.
6. Un WARNING persista pana cand este achitat de pilot sau dispar conditiile care l-au generat.
7. Dupa achitare un nou WARNING va fi generat doar daca a existat cel putin o citire pentru care nu s-a generat WARNING sau ALARM.
8. Cand un semnal ALARM este generat un led isi schimba culoarea din verde in rosu.
9. Un ALARM persista pana cand dispar conditiile care l-au generat
10. Puterea motorului este citita cu ajutorul unui senzor.
11. Puterea motorului este afisata pe un ecran de tip ceas
12. Atunci cand puterea motorului este este mai mica decat 110000 N, un semnal WARNING
este generat
13. Daca semnalul WARNING este achitat atunci se porneste un compresor auxiliar.
14. Atunci cand puterea motorului este este mai mica decat 80000 N, un semnal ALARM
este generat
15. Dupa aparitia semnalului ALARM se porneste un compresor auxiliar
16. Compresorul auxiliar se opreste daca puterea motorului este mai mare decat 140000 N
