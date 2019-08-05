# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"hc.name",
    :"hc.tags",
    :"hc.mbean.name"
  ]

  @type t :: %__MODULE__{
    :"hc.name" => ConfigNodePropertyString,
    :"hc.tags" => ConfigNodePropertyArray,
    :"hc.mbean.name" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"hc.name", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"hc.tags", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"hc.mbean.name", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end
