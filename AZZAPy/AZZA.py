doc = open ("rooster_dota.txt", "r")
persos =  (doc.read ()).split ('nom: ')
doc.close ()

persos = sorted (persos)

for nb_perso in range (len (persos)):
	print (persos[nb_perso] + " , " + persos[len (persos) - 1 - nb_perso])