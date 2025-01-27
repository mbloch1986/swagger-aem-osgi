# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"htmllibmanager.timing",
    :"htmllibmanager.debug.init.js",
    :"htmllibmanager.minify",
    :"htmllibmanager.debug",
    :"htmllibmanager.gzip",
    :"htmllibmanager.maxDataUriSize",
    :"htmllibmanager.maxage",
    :"htmllibmanager.forceCQUrlInfo",
    :"htmllibmanager.defaultthemename",
    :"htmllibmanager.defaultuserthemename",
    :"htmllibmanager.clientmanager",
    :"htmllibmanager.path.list",
    :"htmllibmanager.excluded.path.list",
    :"htmllibmanager.processor.js",
    :"htmllibmanager.processor.css",
    :"htmllibmanager.longcache.patterns",
    :"htmllibmanager.longcache.format",
    :"htmllibmanager.useFileSystemOutputCache",
    :"htmllibmanager.fileSystemOutputCacheLocation",
    :"htmllibmanager.disable.replacement"
  ]

  @type t :: %__MODULE__{
    :"htmllibmanager.timing" => ConfigNodePropertyBoolean,
    :"htmllibmanager.debug.init.js" => ConfigNodePropertyString,
    :"htmllibmanager.minify" => ConfigNodePropertyBoolean,
    :"htmllibmanager.debug" => ConfigNodePropertyBoolean,
    :"htmllibmanager.gzip" => ConfigNodePropertyBoolean,
    :"htmllibmanager.maxDataUriSize" => ConfigNodePropertyInteger,
    :"htmllibmanager.maxage" => ConfigNodePropertyInteger,
    :"htmllibmanager.forceCQUrlInfo" => ConfigNodePropertyBoolean,
    :"htmllibmanager.defaultthemename" => ConfigNodePropertyString,
    :"htmllibmanager.defaultuserthemename" => ConfigNodePropertyString,
    :"htmllibmanager.clientmanager" => ConfigNodePropertyString,
    :"htmllibmanager.path.list" => ConfigNodePropertyArray,
    :"htmllibmanager.excluded.path.list" => ConfigNodePropertyArray,
    :"htmllibmanager.processor.js" => ConfigNodePropertyArray,
    :"htmllibmanager.processor.css" => ConfigNodePropertyArray,
    :"htmllibmanager.longcache.patterns" => ConfigNodePropertyArray,
    :"htmllibmanager.longcache.format" => ConfigNodePropertyString,
    :"htmllibmanager.useFileSystemOutputCache" => ConfigNodePropertyBoolean,
    :"htmllibmanager.fileSystemOutputCacheLocation" => ConfigNodePropertyString,
    :"htmllibmanager.disable.replacement" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"htmllibmanager.timing", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.debug.init.js", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.minify", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.debug", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.gzip", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.maxDataUriSize", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"htmllibmanager.maxage", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"htmllibmanager.forceCQUrlInfo", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.defaultthemename", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.defaultuserthemename", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.clientmanager", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.path.list", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"htmllibmanager.excluded.path.list", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"htmllibmanager.processor.js", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"htmllibmanager.processor.css", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"htmllibmanager.longcache.patterns", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"htmllibmanager.longcache.format", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.useFileSystemOutputCache", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.fileSystemOutputCacheLocation", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.disable.replacement", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

