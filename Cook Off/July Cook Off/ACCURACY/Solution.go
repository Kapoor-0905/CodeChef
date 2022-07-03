package main

import "fmt"

func main() {
	var t, x, res, ult, fi int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		fmt.Scan(&x)
		if x==0 || x%3==0 {
		    fmt.Println(0)
		}else{
		    res = x / 3
		ult = res + 1
		fi = ult * 3 
		fmt.Println(fi - x)
		}
		
	}
	fmt.Println("")
}
