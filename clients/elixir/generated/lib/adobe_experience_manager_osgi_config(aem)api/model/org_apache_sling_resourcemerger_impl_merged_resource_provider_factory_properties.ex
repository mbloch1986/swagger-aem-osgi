# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"merge.root",
    :"merge.readOnly"
  ]

  @type t :: %__MODULE__{
    :"merge.root" => ConfigNodePropertyString,
    :"merge.readOnly" => ConfigNodePropertyBoolean
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"merge.root", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"merge.readOnly", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
  end
end
