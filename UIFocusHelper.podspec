#
# Be sure to run `pod lib lint UIFocusHelper.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'UIFocusHelper'
  s.version          = '0.1.1'
  s.summary          = 'Utilities to help visualize focus guides and quickLookDebugView snapshots without using breakpoints or the debugger.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
Visualize UIFocusGuides and create focus engine quickLookDebugView snapshots (the ones you usually need to set breakpoints in focus delegate methods in Xcode for). WARNING: The snapshot code uses private frameworks and should not be deployed in any app store apps.
                       DESC

  s.homepage         = 'https://github.com/lechium/UIFocusHelper'
   s.screenshots     = "https://raw.githubusercontent.com/lechium/UIFocusHelper/master/Example_One.png", "https://raw.githubusercontent.com/lechium/UIFocusHelper/master/None_Focus.png", "https://raw.githubusercontent.com/lechium/UIFocusHelper/master/Down_Focus.png"
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Kevin Bradley' => 'kevin.w.bradley@me.com' }
  s.source           = { :git => 'https://github.com/lechium/UIFocusHelper.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.tvos.deployment_target = '13.0'

  s.source_files = 'UIFocusHelper/Classes/**/*'
  
  # s.resource_bundles = {
  #   'UIFocusHelper' => ['UIFocusHelper/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
