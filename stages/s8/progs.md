class
	A {
		decl
			int i;
			int f0();
			int f1();
		enddecl
		int f0() {
			decl
				int c;
			enddecl
			begin
				c = self.f1();
				write(self.i);
				return 1;
			end
		}
		int f1() {
			decl
			enddecl
			begin
				self.i=0;
				write("In A F1");
				return 1;
			end
		}
	}
	B extends A {
		decl
			int f1();
		enddecl
		int f1() {
			decl
			enddecl
			begin
				self.i=1;
				write("In B F1");
				return 1;
			end
		}
	}
endclass

decl
	int n;
	A obj;
enddecl

int main() {
	decl
	enddecl
	begin
		n=initialize();
		read(n);
		write(n);
		if(n>0) then
			obj = new(A);
		else
			obj = new(B);
		endif;
		n = obj.f0();
		return 1;
	end
}


// -------------------------------------------------------------------------------

class
	A {
		decl
			int f0();
			int f1();
		enddecl
		int f0() {
			begin
				write("In Class A f0");
				return 1;
			end
		}
		int f1() {
			begin
				write("In Class A f1");
				return 1;
			end
		}
		}
	B extends A {
		decl
			int f0();
			int f2();
		enddecl
		int f0() {
			begin
				write("In Class B f0");
				return 1;
			end
		}
		int f2() {
			begin
				write("In Class B f2");
				return 1;
			end
		}
	}
	C extends B {
		decl
			int f0();
			int f2();
			int f4();
		enddecl
		int f0() {
			begin
				write("In Class C f0");
				return 1;
			end
		}
		int f2() {
			begin
				write("In Class C f2");
				return 1;
			end
		}
		int f4() {
			begin
				write("In Class C f4");
				return 1;
			end
		}
	}
endclass

decl
	A obj;
	A test_obj;
enddecl

int main() {
	decl
		int temp,n;
	enddecl
	begin
		temp= initialize();
		read(n);
		
		if(n < 0)then
			obj = new(A);
		else
			if(n == 0)then
				obj = new(B);
			else
				if(n > 0)then
					obj = new(C);
				endif;
			endif;
		endif;
		
		test_obj = obj;
		write(test_obj.f0());
		
		return 1;
	end
}

// ------------------------------------------------------------------------------------

class
	Rectangle {
		decl
			int length;
			int breadth;
			int set_dimensions();
			int area();
		enddecl
		int area() {
			decl
			enddecl
			begin
				return self.length * self.breadth;
			end
		}
		int set_dimensions() {
			decl
			enddecl
			begin
				write("Enter length ");
				read(self.length);
				write("Enter breadth");
				read(self.breadth);

				return 0;
			end
		}
	}
	Square extends Rectangle {
		decl
			int set_dimensions();
		enddecl
		int set_dimensions() {
			decl
			enddecl
			begin
				write("Enter side sq");
				read(self.length);
				self.breadth = self.length;
				return 0;
			end
		}
	}
endclass

decl
	Rectangle obj;
enddecl

int main() {
	decl
		int x;
	enddecl
	begin
		x=initialize();
		
		write("Enter");
		write("1 Rectangle");
		write("2 Square");
		
		read(x);
		
		if(x==1) then
			obj = new(Rectangle);
		else
			obj = new(Square);
		endif;
		
		x = obj.set_dimensions();
		write(obj.area());
		return 0;
	end
}



// --------------------------------------------------------

class 
	A {
        decl
            int f0();
            int f1();
            int f(int x, int y);
        enddecl
        int f0() {
            begin
                write("In class A f0");
                return 1;
            end
        }
        int f1() {
            begin
                write("In class A f1");
                return 1;
            end
        }
        int f(int x, int y) {
            begin
                return x;
            end
        }
    }
    B extends A {
        decl
            int f0();
            int f2();
            int f(int x, int y);
        enddecl
        int f0() {
            begin
                write("In class B f0");
                return 1;
            end
        }
        int f2() {
            begin
                write("In class B f2");
                return 1;
            end
        }
        int f(int x, int y) {
            begin
                return y;
            end
        }
    }
    C extends B {
        decl
            int f0();
            int f2();
            int f4();
            int f(int x, int y);
            int  g(int x, int y);
        enddecl
        int f0() {
            begin
                write("In class C f0");
                return 1;
            end
        }
        int f2() {
            begin
                write("In class C f2");
                return 1;
            end
        }
        int f4() {
            begin
                write("In class C f4");
                return 1;
            end
        }
        int f(int x, int y) {
            decl
                int val;
            enddecl
            begin
                if(y == 0)then
                    val = x;
                else
                    val = self.g(self.f(x-1,y-1),y-1);
                endif;
                
                return val;
            end
        }

        int g(int x, int y) {
            decl
                int val;
            enddecl
            begin
                if(y == 0)then
                    val = x;
                else
                    val = self.f(self.g(x-1,y-1),y-1);
                endif;
                
                return val;
            end
        }
    }
endclass

decl
    A obj;
    A test_obj;
enddecl

int main () {
    decl
        int temp,n;
        int x,y;
    enddecl
    begin
        temp= initialize();
        read(n);
        if(n < 0)then
            obj = new(A);
        else
            if(n == 0)then
                obj = new(B);
            else
                if(n > 0)then
                    obj = new(C);
                endif;
            endif;
        endif;
        test_obj = obj;

        x = 10;
        y = 12;

        write(test_obj.f(x,y));
        return 1;
    end
}

// ---------------------------------------------------------------------------------

class
    A {
        decl
            int f0();
        enddecl
        int f0 () {
            begin
                write("In class A f0");
                return 1;
            end
        }
    }
    B {
        decl
			int temp;
			A a_obj;
			int f1 ();
        enddecl
        int f1 () {
            begin
                write("In class B f2");
				self.temp = self.a_obj.f0();
                return 1;
            end
        }
    }
endclass

decl
    B obj;
enddecl

int main() {
    decl
		int temp;
    enddecl
    
	begin
        temp = initialize();
		temp = obj.f1 ();

		return 1;
    end
}

// ------------------------------------------------------------------------------

class
    A {
        decl
			int temp;
            int f0(int x);
        enddecl
        int f0 (int x) {
            begin
				if (x > 0) then
					self.temp = self.f0 (x-1);
				endif;

				write("Class A f0 hi");

				return 1;
            end
        }
    }
    B {
        decl
			int temp;
			A a_obj;
			int f1 ();
        enddecl
        int f1 () {
            begin
                write("In class B f1");
				self.a_obj = new (A);
				self.temp = self.a_obj.f0(3);
                return 1;
            end
        }
    }
	C {
        decl
			int temp;
			B b_obj;
			int f2 ();
        enddecl
        int f2 () {
            begin
                write("In class C f2");
				self.b_obj = new (B);
				self.temp = self.b_obj.f1();
                return 1;
            end
        }
    }
endclass

decl
    C obj;
enddecl

int main() {
    decl
		int temp;
    enddecl
    
	begin
        temp = initialize();
		
		obj = new (C);
		temp = obj.f2 ();

		return 1;
    end
}