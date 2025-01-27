# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"path",
    :"checkpath.prefix",
    :"jcrPath"
  ]

  @type t :: %__MODULE__{
    :"path" => ConfigNodePropertyString,
    :"checkpath.prefix" => ConfigNodePropertyString,
    :"jcrPath" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"path", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"checkpath.prefix", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"jcrPath", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

