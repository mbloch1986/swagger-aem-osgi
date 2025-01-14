# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"providerName",
    :"forward.requests"
  ]

  @type t :: %__MODULE__{
    :"providerName" => ConfigNodePropertyString,
    :"forward.requests" => ConfigNodePropertyBoolean
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"providerName", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"forward.requests", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
  end
end

