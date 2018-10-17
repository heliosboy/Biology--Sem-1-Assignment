#take some disease, spread it all over the world wiping out mankind!

#what do i need for that?
#a disease and a world

#what are the diseases available?
#Anything the user can conjure

#which parts of the world are accessible?
#the six continents excluding antarctica

#specifications of the disease under consideration:
#It infects humans and livestock.

#is aquatic life affected by it?
#yes

#is there any corelation between the extent of disease manifestation in a aquatic life form and non-aquatic life form?
#It certatinly does.

#What is correaltion?
#The aquatic life is less affected bythe disease under consideration

#What are the parameters involved with any disease in the code?
#virulence, resistance, reproduction, locale, migratability, lifespan

#Why just these? 
#Virulence: How effective the disease causing pathogen is in infecting the host and taking the resources.
#			spread of he disease and the total deaths caused.
#			virulence>threshhold ; decreases migratability.

#Resistance: The property of a pathogen to adapt to the medication.
#			spread of disease, migratability and mutation rate.
#			resistance>threshold ; reproduction increases, lifespan increases.

#reproduction: The property of a pathogen to multiply and produce offsprings that inherit most of the parental traits
#			spread of disease, migratability and relative rate of evolution.
#			reproduction>threshhold=>more energy requirements ;the lifespan falls down, virulence comes down. 
#			resistance comes down. migratability increases,

#locale: Demograpphic demarcation where the pathogen is most virulent for its given stats

#migratability: ability of a pathogen to migrate
#				..
#				..
#lifespan:	time between the birth and death of a pathogen
#			reproduction
#			random

#what are the parameters involved with a place in the code?
#6 continents. 6 demographic deamarcations. each demographic demarcation is different. each demographic demarcation 
#of a particular type are in different continents are all same.
#continents: africa, asia, australia, europe, north america, south america 							
#demographic deamarcations: deserts, rainforests, cold mountains, plains, drylands, uninhabitable patch 

#naming different regions: user will be promted to input certain continent and a demographic demarcation.

#start
#user gets to name his disease
#user gets to start the disease in a place of his choice, locale
#all the disease paramaters start from zero values except one, user gives a score of one to one parameter
#there will be a scale of 1-10 for each parameter 
#system time will be used to change certain variables 
#for some choices, user will be awarded points and for the others, be penalised
#overtime, depending on the choices the player makes
input("Are you fed up of the overpopulation issue or just want to outright kill people and livestock. If yes, press enter.")
welcome="Welcome to the party , Plaque-Mongerer!"
print(welcome)
input("After each promt, you will need to press the enter key")
input()
inst1="You will have to make a humanity wiping disease."
print(inst1)
input("Enter key")
input()
inst2="You are a devout fan of Thanos and believe that all things in the universe should be perfectly balanced."
print(inst2)
input("You got the idea!")
input()
inst3="You are deeply inspired by the motives of Thanos and want to put them in action."
print(inst3)
input()
inst4="You do your work and find that spreading a disease that wipes out entire human race is all you need."
print(inst4)
input()
inst5="So, you begin to enter the zone of Bio-warfare!"
print(inst5)
input()
inst6="You are now a Bio-terrorist!"
print(inst6)
input()
inst7="Spread the 'disease', wipe out the disease of this planet, 'HUMANS'!"
print(inst7)
input()
inst8="Your motives clear, you set out to work."
print(inst8)
input()
inst9="You make your own underground bunker, where you make an outerspace observation probe, just to go up there and watch the world clense itself!"
print(inst9)
input()
name=input("Name your target disease : ")
input()
inst10="Chose where you want to start. The catalogue should be available on the screen."
print(inst10)
input()
catalogue1=[['Continients :'],['Africa'],['Asia'],['Australia'],['Europe'],['North America'],['South America']]
for i in range(len(catalogue1)):
	for j in range(len(catalogue1[i])):
		print(catalogue1[i][j])
input()	
inst11="You will now be selecting the demographic demarcation in that continent"
print(inst11)
input()
catalogue2=[['Desert'],['Rainforest'],['Cold Mountains'],['Plains'],['Dry Lands'],['Uninhabitable zones']]
for i in range(len(catalogue2)):
	for j in range(len(catalogue2[i])):
		print(catalogue2[i][j])
input()
inst12="Now put your thinking cap on and start the game!"
print(inst12)
input()
inst13="Or just make blind choices and see what happens!"
print(inst13)
input()
inst14="Go on now!"
print(inst14)
input()
continent=input("Enter the continent : ")
input()
demographic_demarcation=input("Enter the demographic demarcation : ")
input()
