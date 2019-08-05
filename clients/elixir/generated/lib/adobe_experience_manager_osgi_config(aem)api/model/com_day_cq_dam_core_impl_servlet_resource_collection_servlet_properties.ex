# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplServletResourceCollectionServletProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"sling.servlet.resourceTypes",
    :"sling.servlet.methods",
    :"sling.servlet.selectors",
    :"download.config",
    :"view.selector",
    :"send_email"
  ]

  @type t :: %__MODULE__{
    :"sling.servlet.resourceTypes" => ConfigNodePropertyArray,
    :"sling.servlet.methods" => ConfigNodePropertyString,
    :"sling.servlet.selectors" => ConfigNodePropertyString,
    :"download.config" => ConfigNodePropertyString,
    :"view.selector" => ConfigNodePropertyString,
    :"send_email" => ConfigNodePropertyBoolean
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplServletResourceCollectionServletProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"sling.servlet.resourceTypes", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"sling.servlet.methods", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"sling.servlet.selectors", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"download.config", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"view.selector", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"send_email", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
  end
end
