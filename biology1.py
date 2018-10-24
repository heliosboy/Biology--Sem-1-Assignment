#take some disease, spread it all over the world wiping out mankind!

#what do i need for that?
#a disease and a world

#what are the diseases available?
#Anything the user can conjure

#which parts of the world are accessible?
#the six continents excluding antarctica

#specifications of the disease under consideration:
#It infects humans.

#is aquatic life affected by it?
#yes

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
inst10="Chose the Continient you want to start. The catalogue should be available on the screen."
print(inst10)
input()
catalogue1=[['Africa'],['Asia'],['Australia'],['Europe'],['North America'],['South America']]
for i in range(len(catalogue1)):
	for j in range(len(catalogue1[i])):
		print(catalogue1[i][j])
input()	
inst11="You will now be selecting the demographic demarcation in that continent"
print(inst11)
input()
catalogue2=[['Desert'],['Rainforest'],['Cold Mountains'],['Plains'],['Dry Lands'],['Coasts']]
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
accepted_strings1={'Asia','Africa','Australia','Europe','North America','South America'}
continent=input("Enter the continent : ")
input()
while continent not in accepted_strings1:
	print("You did not select a continent from the list! Select again")
	continent=input("Enter a continent from the catalogue : ")
demographic_demarcation=input("Enter the demographic demarcation : ")
input()
accepted_strings2={'Desert','Rainforest','Cold Mountains','Plains','Dry Lands','Coasts'}
while demographic_demarcation not in accepted_strings2:
	print("You did not select a demographic demarcation from the catalogue!")
	demographic_demarcation=input("Enter a demographic demarcation from the catalogue : ")
inst15="Now that you have started infecting"
inst15_1="You get to add 1 point to the following characteristics of"
print(inst15,demographic_demarcation,"of",continent)
input()
print(inst15_1,name)
input()
disease_char=[['Virulence'],['Resistance'],['Migration'],['Reproduction']]
for i in range(len(disease_char)):
	for j in range(len(disease_char[i])):
		print(disease_char[i][j])
input()
inst16="Remember! These points are vital for"
inst16_1="to infect the ENTIRE GLOBE!"
print(inst16,name,inst16_1)
input()
initial_disease_stat=input("Enter a characteristic : ")
input()
accepted_strings3={"Virulence","Resistance","Reproduction","Migration"}
while initial_disease_stat not in accepted_strings3:
	print("Please enter the proper stat again!")
	initial_disease_stat=input("Enter a proper characteristic from the catalogue : ")
virulence=resistance=reproduction=migration=0
if initial_disease_stat=="Virulence":
	virulence=virulence+1
elif initial_disease_stat=="Resistance":
	resistance=resistance+1
elif initial_disease_stat=="Reproduction":
	reproduction=reproduction+1
elif initial_disease_stat=="Migration":
	migration=migration+1
inst17="Okay, listen up, Plaque-Mongerer! You have started the fire in the hearts of people living in the"
inst17_1="They think this is just another disease. Prove them wrong or let them have their fun!"
inst17_2="1 second in our game time is 5 days in real life. Something interesting happens every 10 seconds."
inst17_3="You get to upgrade your disease!"
inst17_4="""Catch: If your disease gets too much of attention, the medical research to cure that disease
will take a boom and if this happens, 

Your disease is under threat!

Make sure you balance all the aspects of this disease and wipeout the entire humanity
before your disease gets wiped out!"""   
print(inst17,demographic_demarcation,"of",continent)
input()
print(inst17_1)
input()
print(inst17_2)
input()
print(inst17_3)
input()
print(inst17_4)
input()
loop_num=0
inst18="Your stats are as follows : "
print(inst18)
input()
print("Virulence :",virulence)
print("Resistance :",resistance)
print("Reproduction :",reproduction)
print("Migration :",migration)
print("Locale :",demographic_demarcation)
input()
present_demographic_demarcation=
x=present_demographic_demarcation
infection_rate=reproduction+migration+x #(x=10 if locale=demoreg else x=0)
mortality_rate=mortrate=viru+resist+x #(x=10 if locale=demoreg else x=0)
research_rate=infection_rate+mortality_rate-x #(x=10 if locale=demoreg else x=0) 
research_output_rate=y+virulence #(y here is some stuff that depemds on the locale)
cure_rate=y
fraction_of_present_demographic_demarcation_infected=, 
air_passengers_exchange_rate=z #(z==100 if infection rate <=30, z==75 if infection rate<=50, z==50 if infection rate<=60, z==25 if infection rate<=75, z=="CODE RED" if infection frate >=90) 
water_passengers_excahnge_rate=z-10
time_of_the_game=clocktime
number_of_loops=loop_num 
