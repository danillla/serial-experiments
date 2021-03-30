Pod::Spec.new do |spec|
  spec.name         = "SerialExperiments"
  spec.version      = "1.0.1"
  spec.summary      = "A short description of SerialExperiments."
  spec.homepage     = "http://google.com"
  spec.license      = { :type => "MIT" , :file => "LICENSE"}
  spec.author       = { "Daniil Alferov" => "daniil.alferov@gmail.com" }
  spec.platform     = :ios, "10.0"
  spec.source       = { :git => "https://github.com/danillla/serial-experiments.git", :tag => "#{spec.version}" }
  # spec.ios.deployment_target = '10.0'
  spec.vendored_frameworks = 'SerialExperiments.xcframework'
end
