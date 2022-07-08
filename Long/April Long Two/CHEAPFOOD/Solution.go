package main
import "fmt"

func main(){
  var t,x,disnt,dist,cop,coup;
  fmt.Scan(&t)
  for i:=0;i<t;i++{
    fmt.Scan(&x)
    disnt = 100
    dis = x - disnt
    cop = (x*10)/100
    coup = x - cop
    if dis > coup{
        fmt.Println(cop)
    } else if coup > dis{
        fmt.Println(disnt)
    } else {
        fmt.Println(disnt)
    }
  }
  fmt.Print("")
}
