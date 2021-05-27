Pod::Spec.new do |s|
  s.name         = "SerialExperiments"
  s.version      = "1.0.5"
  s.summary      = "This summary should be long enough that the system should recognize it as meaningful."
  s.homepage     = "http://google.com"
  s.license      = { :type => "MIT" , :file => "LICENSE"}
  s.author       = { "Daniil Alferov" => "daniil.alferov@gmail.com" }
  s.platform     = :ios, "10.0"
  s.source       = { :git => "https://github.com/danillla/serial-experiments.git", :tag => "#{s.version}" }
  s.ios.deployment_target = '10.0'
  s.vendored_frameworks = 'SerialExperiments.xcframework'
end
