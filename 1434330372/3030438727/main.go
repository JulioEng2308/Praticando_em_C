package main
import "fmt"
import "math"
func main () {
    var htanque float64
    var hcombustivel float64
    var raio float64
    var voltanque float64
    var volcombustivel float64
    var volcilindro float64
    var volesfera float64
    var vollitro float64
    var volcalota float64
    var variavel float64
    var volAr float64

    fmt.Scan(&htanque)
    fmt.Scan(&hcombustivel)
    fmt.Scan(&raio)

    volcilindro = math.Pi * math.Pow(raio,2.0) * (htanque - (2*raio))
    volesfera = (4.0/3.0) * math.Pow(raio,3.0) * math.Pi
    voltanque = volcilindro + volesfera
    vollitro = voltanque * 1000

    volcalota = (math.Pi * math.Pow(variavel,2.0)*(3.0*raio - variavel)) / 3.0

    if htanque <= 0 || hcombustivel <= 0 || raio <=0 || htanque < 2*raio || htanque <= hcombustivel{
        fmt.Printf("Entradas: %.1f , %.1f , %.1f\n", htanque, hcombustivel, raio)
        fmt.Println("Entradas invalidas")
        return
    }
  
    if hcombustivel <= raio {
       volcombustivel = volcalota
    } else {
        if hcombustivel <= htanque - raio {
            volcombustivel = (volesfera / 2.0) + math.Pi * math.Pow(raio,2.0) * (hcombustivel - raio)
        } else {
            variavel = htanque - hcombustivel
            volAr = volcalota
            volcombustivel = vollitro - volAr
        }
      volcombustivel *= 1000
    fmt.Printf("Entradas: %.1f , %.1f , %.1f\n", htanque, hcombustivel, raio)
    fmt.Printf("Volume: %.3f litros\n", volcombustivel)
    }
      
}