class Solution:
    def addBinary(self, a: str, b: str) -> str:
        """
        * string -> bytes
          data = ""                 # string
          1) data = "".encode()     # bytes
          2) data = b""             # bytes
      
        * bytes -> string
          data = b""                # bytes
          1) data = b"".decode()    # string
          2) data = str(b"")        # string
        """
        num1 = int(a.encode(), 2)
        num2 = int(b.encode(), 2)
        
        return bin(num1 + num2)[2:]
