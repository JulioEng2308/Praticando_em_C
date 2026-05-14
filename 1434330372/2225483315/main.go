package main
import "fmt"
import "math"

func main () {
    var salariobruto float64
    var salariobase float64
    var contprev float64
    var salarioliquido float64
    var diferenca float64
    
    
    fmt.Scanln(&salariobruto)  
  
  if salariobruto <= 1659.38 {
      contprev = (salariobruto * 8.0)/100.0
  } else {
        if salariobruto >= 1659.39 && salariobruto <= 2765.66 {
            contprev = (salariobruto * 9.0)/100.0
          } else {
                if salariobruto >= 2765.67 && salariobruto <= 5531.31 {
                    contprev = (salariobruto * 11.0)/100.0
                } else {
                      if salariobruto > 5531.61 {
                          contprev = 608.44
                      }
                }
          }
  }

  diferenca = salariobruto - contprev

  if diferenca <= 1903.98 {
      salariobase = 0
      salarioliquido = diferenca - salariobase
      fmt.Printf("Salario liquido = R$ %.1f\n", (math.Round(salarioliquido * math.Pow(10.0,2.0))/ math.Pow(10.0,2.0)))
  } else {
        if diferenca >= 1903.99 && diferenca <= 2826.65 {
            salariobase = (diferenca * 7.5)/100.0
            salarioliquido = diferenca - salariobase
             fmt.Println("Salario liquido = R$", (math.Round(salarioliquido * math.Pow(10.0,2.0))/ math.Pow(10.0,2.0)))
        } else {
              if diferenca >= 2826.66 && diferenca <= 3751.05 {
                  salariobase = (diferenca * 15.0)/100.0
                  salarioliquido = diferenca - salariobase
                  fmt.Println("Salario liquido = R$", (math.Round(salarioliquido *
                                                  math.Pow(10.0,2.0))/ math.Pow(10.0,2.0)))
              } else {
                    if diferenca >= 3751.06 && diferenca <= 4664.68 {
                        salariobase = (diferenca * 22.5)/100.0
                        salarioliquido = diferenca - salariobase
                        fmt.Println("Salario liquido = R$", (math.Round(salarioliquido *
                                                  math.Pow(10.0,2.0))/ math.Pow(10.0,2.0)))
                    } else {
                          if diferenca > 4664.68 { 
                              salariobase = (diferenca * 27.5)/100.0
                              salarioliquido = diferenca - salariobase
                              fmt.Println("Salario liquido = R$", (math.Round(salarioliquido *
                                                  math.Pow(10.0,2.0))/ math.Pow(10.0,2.0)))
                          }
                    }
              }
        }
  }

   
  
}