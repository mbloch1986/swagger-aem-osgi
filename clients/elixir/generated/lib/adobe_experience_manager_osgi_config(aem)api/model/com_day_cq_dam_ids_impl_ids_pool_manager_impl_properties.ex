# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamIdsImplIdsPoolManagerImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"max.errors.to.blacklist",
    :"retry.interval.to.whitelist",
    :"connect.timeout",
    :"socket.timeout",
    :"process.label",
    :"connection.use.max"
  ]

  @type t :: %__MODULE__{
    :"max.errors.to.blacklist" => ConfigNodePropertyInteger,
    :"retry.interval.to.whitelist" => ConfigNodePropertyInteger,
    :"connect.timeout" => ConfigNodePropertyInteger,
    :"socket.timeout" => ConfigNodePropertyInteger,
    :"process.label" => ConfigNodePropertyString,
    :"connection.use.max" => ConfigNodePropertyInteger
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamIdsImplIdsPoolManagerImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"max.errors.to.blacklist", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"retry.interval.to.whitelist", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"connect.timeout", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"socket.timeout", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"process.label", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"connection.use.max", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
  end
end
