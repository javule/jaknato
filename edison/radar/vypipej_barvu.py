
#-------------Setup----------------
import Ed

Ed.EdisonVersion = Ed.V2

Ed.DistanceUnits = Ed.CM
Ed.Tempo = Ed.TEMPO_MEDIUM

#--------Your code below-----------

def print_value(value):
    stovky = value // 100
    zbytek = (value % 100)
    desitky =  zbytek // 10

    if value > 1000:
        Ed.PlayTone(Ed.NOTE_C_7, 500)
        Ed.TimeWait(500, Ed.TIME_MILLISECONDS)

    # zablikej stovky
    for i in range(stovky):
        Ed.LeftLed(Ed.ON)
        Ed.RightLed(Ed.ON)
        Ed.TimeWait(300, Ed.TIME_MILLISECONDS)
        Ed.LeftLed(Ed.OFF)
        Ed.RightLed(Ed.OFF)
        Ed.TimeWait(300, Ed.TIME_MILLISECONDS)
    
    Ed.TimeWait(300, Ed.TIME_MILLISECONDS)
    
    # zahraj desitky
    for i in range(desitky):
        Ed.PlayTone(Ed.NOTE_E_7, 100)
        Ed.TimeWait(300, Ed.TIME_MILLISECONDS)

    #ceka az dohraje
    while Ed.ReadMusicEnd() == Ed.MUSIC_FINISHED:
        pass

# zapni prisvetlovaci LED
Ed.LineTrackerLed(Ed.ON)
# nacti si, jakou mas pod sebou barvu
barva_zacatek = Ed.ReadLineTracker()
Ed.TimeWait(1, Ed.TIME_SECONDS)
print_value(barva_zacatek)
