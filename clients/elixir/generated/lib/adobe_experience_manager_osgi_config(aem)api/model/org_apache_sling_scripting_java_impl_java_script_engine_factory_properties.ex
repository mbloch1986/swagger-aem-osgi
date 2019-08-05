# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"java.classdebuginfo",
    :"java.javaEncoding",
    :"java.compilerSourceVM",
    :"java.compilerTargetVM"
  ]

  @type t :: %__MODULE__{
    :"java.classdebuginfo" => ConfigNodePropertyBoolean,
    :"java.javaEncoding" => ConfigNodePropertyString,
    :"java.compilerSourceVM" => ConfigNodePropertyString,
    :"java.compilerTargetVM" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"java.classdebuginfo", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"java.javaEncoding", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"java.compilerSourceVM", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"java.compilerTargetVM", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end
