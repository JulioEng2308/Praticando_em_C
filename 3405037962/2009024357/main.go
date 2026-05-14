package main
import "fmt"

func main () {
    var velmax float32
    var velmotorista float32
    var nome string
    var veldiferenca float32
    var multa float32
  
    fmt.Scan(&nome)
    fmt.Scan(&velmax, &velmotorista)
    
    veldiferenca = velmotorista - velmax

    fmt.Println("Motorista:",nome)

    if veldiferenca == 0 {
        fmt.Println("Sem multa")
    } else {
        if veldiferenca <= 10 {
            multa = 50
            fmt.Println("Multa: R$",multa)
        } else {
            if veldiferenca >= 11 && veldiferenca <= 30 {
                multa = 100
                fmt.Println("Multa: RS",multa)
            } else {
                multa = 200
                fmt.Println("Multa: R$",multa)
            }
        }
    }
}