# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"name",
    :"path",
    :"serviceName",
    :"nuggetsPath"
  ]

  @type t :: %__MODULE__{
    :"name" => ConfigNodePropertyString,
    :"path" => ConfigNodePropertyString,
    :"serviceName" => ConfigNodePropertyString,
    :"nuggetsPath" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"name", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"path", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"serviceName", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"nuggetsPath", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

