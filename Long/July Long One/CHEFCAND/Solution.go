package main
import "fmt"

func main(){
  var t,n,x,di,re int
  fmt.Scanln(&t)
  for i:=0;i<t;i++{
    fmt.Scan(&n,&x)
    di = (n-x)/4
	  re = (n-x)%4
    if n<x {
      fmt.Println("0")
    } else if re == 0 {
      fmt.Println(di)
    } else {
      fmt.Println(di+1)
    }
  }
  fmt.Print("")
}
