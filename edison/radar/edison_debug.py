#-------------Setup----------------
import Ed

Ed.EdisonVersion = Ed.V2

Ed.DistanceUnits = Ed.CM
Ed.Tempo = Ed.TEMPO_MEDIUM

#--------Your code below-----------

# vypise hodnotu do eteru
def vypis(hodnota):
    Ed.SendIRData(255)
    Ed.TimeWait(300, Ed.TIME_MILLISECONDS)
    Ed.SendIRData(hodnota // 255)
    Ed.TimeWait(300, Ed.TIME_MILLISECONDS)
    Ed.SendIRData(hodnota % 255)
    Ed.TimeWait(300, Ed.TIME_MILLISECONDS)

vypis(56)
Ed.TimeWait(300, Ed.TIME_MILLISECONDS)
vypis(386)
Ed.PlayBeep()