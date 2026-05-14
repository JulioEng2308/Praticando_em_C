package main
import "fmt"

func main () {
    var valor0 int
    var valor1 int 
    var valor2 int
    var valor3 int

    fmt.Scanln(&valor1)
    fmt.Scanln(&valor2)
    fmt.Scanln(&valor3)

    if valor1 + valor2 > valor3 && valor1 + valor3 > valor2 && valor3 + valor2 > valor1 {
        if valor1 == valor2 && valor3 == valor1 && valor3 == valor2 {
            valor0 = 1
            fmt.Print(valor0)
        } else {
            if (valor1 == valor2) || (valor3 == valor2) || (valor1 == valor3) {
                valor0 = 2 
                fmt.Print(valor0)
            } else {
                if (valor1 != valor2) && (valor3 != valor2) && (valor1 != valor3) {
                    valor0 = 3
                    fmt.Print(valor0)
                }
            }
        }
} else {
    valor0 = 0
    fmt.Print(valor0)
} 

}