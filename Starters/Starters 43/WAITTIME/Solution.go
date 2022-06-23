package main
import "fmt"

func main(){
	var t,k,x int
	fmt.Scanln(&t)
	for i:=0;i<t;i++{
	    fmt.Scanln(&k,&x)
	    fmt.Println(7*k - x)
	}
}
