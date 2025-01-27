# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqWidgetImplHtmlLibraryManagerImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"htmllibmanager.clientmanager",
    :"htmllibmanager.debug",
    :"htmllibmanager.debug.console",
    :"htmllibmanager.debug.init.js",
    :"htmllibmanager.defaultthemename",
    :"htmllibmanager.defaultuserthemename",
    :"htmllibmanager.firebuglite.path",
    :"htmllibmanager.forceCQUrlInfo",
    :"htmllibmanager.gzip",
    :"htmllibmanager.maxage",
    :"htmllibmanager.maxDataUriSize",
    :"htmllibmanager.minify",
    :"htmllibmanager.path.list",
    :"htmllibmanager.timing"
  ]

  @type t :: %__MODULE__{
    :"htmllibmanager.clientmanager" => ConfigNodePropertyString,
    :"htmllibmanager.debug" => ConfigNodePropertyBoolean,
    :"htmllibmanager.debug.console" => ConfigNodePropertyBoolean,
    :"htmllibmanager.debug.init.js" => ConfigNodePropertyString,
    :"htmllibmanager.defaultthemename" => ConfigNodePropertyString,
    :"htmllibmanager.defaultuserthemename" => ConfigNodePropertyString,
    :"htmllibmanager.firebuglite.path" => ConfigNodePropertyString,
    :"htmllibmanager.forceCQUrlInfo" => ConfigNodePropertyBoolean,
    :"htmllibmanager.gzip" => ConfigNodePropertyBoolean,
    :"htmllibmanager.maxage" => ConfigNodePropertyInteger,
    :"htmllibmanager.maxDataUriSize" => ConfigNodePropertyInteger,
    :"htmllibmanager.minify" => ConfigNodePropertyBoolean,
    :"htmllibmanager.path.list" => ConfigNodePropertyArray,
    :"htmllibmanager.timing" => ConfigNodePropertyBoolean
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqWidgetImplHtmlLibraryManagerImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"htmllibmanager.clientmanager", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.debug", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.debug.console", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.debug.init.js", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.defaultthemename", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.defaultuserthemename", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.firebuglite.path", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"htmllibmanager.forceCQUrlInfo", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.gzip", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.maxage", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"htmllibmanager.maxDataUriSize", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"htmllibmanager.minify", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"htmllibmanager.path.list", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"htmllibmanager.timing", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
  end
end

