Pod::Spec.new do |s|


  s.name         = "APPTool"
  s.version      = "1.0.0"
  s.summary      = "工具类"
  s.description  = <<-DESC

        二维码生成和扫描,使用
                   DESC
  s.homepage     = "https://github.com/myOneGit/APPTool"
  s.license      = { :type => "MIT", :file => "LICENSE" }


  s.author       = { "TSF" => "345499860@qq.com" }
  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/myOneGit/APPTool.git", :tag => s.version }
  s.source_files = "APPTool/*.{h,m}"
  s.resources    = "APPTool/*.png"
  # s.frameworks   = ""
  s.requires_arc = true

  s.dependency "Masonry"


end
