package main
import "fmt"

func main(){
  var t,a,b,c,tot int
  fmt.Scanln(&t)
  for i:=0;i<t;i++{
    fmt.Scan(&a,&b,&c)
    tot = a+b+c
    if tot >=100 && a>=10 && b>=10 && c>=10{
      fmt.Println("PASS")
    } else {
      fmt.Println("FAIL")
    }
  }
  fmt.Print("")
}
