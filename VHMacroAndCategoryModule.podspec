Pod::Spec.new do |s|
  s.name             = 'VHMacroAndCategoryModule'
  s.version          = '1.0.0'
  s.summary          = '创建我的第一个pod库.'

  s.description      = <<-DESC
TODO: 添加几个类文件.
                       DESC

  s.homepage         = 'https://github.com/VihongL/VHMacroAndCategoryModule'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'xxxxxx' => 'xxxxxx@163.com' }
  s.source           = { :git => 'https://github.com/VihongL/VHMacroAndCategoryModule.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'Classes/*.{h,m}'

end