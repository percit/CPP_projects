enum class ErrorCode {
   OK,
   SYSTEM_FAILURE, 
   LOW_VIOLTAGE, 
  ... 
  ..
};

ErroCode x = ::getOperationStatus();

if(error == ErrorCode::OK){ //and with function just add return ErrorCode::OK when it gives some bad stuff
  std::cout << "Proceed to next step" << "\n";
}

int x; 
// Compile-time error !
//-------------------
 x = error; 

// Conversion only possible with static cast 
x = static_cast<int>(error);
