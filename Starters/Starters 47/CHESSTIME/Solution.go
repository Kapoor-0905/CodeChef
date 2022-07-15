package main
import "fmt"

func main() {
	var t,n,chess int
	fmt.Scanln(&t)
  for i:=0;i<t;i++ {
	    fmt.Scanln(&n)
	    chess = (n*60)/20;
	    fmt.Println(chess);
	}
}
