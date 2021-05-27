Pod::Spec.new do |s|
  s.name         = 'ApsisOne'
  s.version      = '0.1'
  s.summary      = 'This summary should be long enough that the system should recognize it as meaningful.';
  s.homepage     = 'http://apsis.com';
  s.license      = { :type => "MIT" , :file => "LICENSE"}
  s.author       = { "Daniil Alferov" => "daniil.alferov@gmail.com" }
  s.platform     = :ios, '10.0'
  s.source       = { :git => "https://github.com/danillla/serial-experiments.git", :tag => "#{s.version}" }
  s.ios.deployment_target = '10.0'
  s.vendored_frameworks = 'ApsisOne.xcframework'
end
