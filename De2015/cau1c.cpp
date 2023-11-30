class Singleton {
public:
   		 static Singleton& getInstance() {
       		 	static Singleton instance;
        			return instance;
   		 }

private:
Singleton() {} // Hàm tạo mặc định là private để không cho phép tạo thể hiện từ bên ngoài
   		 Singleton(const Singleton& other) = delete; // Vô hiệu hóa toán tử sao chép
   		 Singleton& operator=(const Singleton& other) = delete; // Vô hiệu hóa toán tử gán

   		 // Các thành viên và phương thức khác của lớp Singleton
};

