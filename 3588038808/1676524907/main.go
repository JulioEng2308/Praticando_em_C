package main

import "fmt"

func main () {
    var altura float32
    var comprimento float32
    var largura float32
    var dias float32
    var volume float32
    var litro_dia float32
    
    fmt.Println("Informe os dados do cubo")
    fmt.Scanln(&altura)
    fmt.Scanln(&comprimento)
    fmt.Scanln(&largura)
    fmt.Scanln(&dias)

    volume = (altura * largura * comprimento) / 1000
    litro_dia = volume / dias
   

    fmt.Printf("Capacidade do reservatorio= %.1f litros",volume)
    fmt.Printf("\n")
    fmt.Printf("Autonomia do reservatorio= %.1f dias", litro_dia)
    fmt.Printf("\n")
  if litro_dia < 2.0 {
    fmt.Println("Consumo Elevado\n")
  } else if litro_dia >=2.0 && litro_dia <=7.0{
    fmt.Println("Consumo Moderado\n")
  } else if litro_dia > 7.0 {
    fmt.Println("Consumo Reduzido\n")
  }
    

  
}