# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"granite.maintenance.mandatory",
    :"job.topics"
  ]

  @type t :: %__MODULE__{
    :"granite.maintenance.mandatory" => ConfigNodePropertyBoolean,
    :"job.topics" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"granite.maintenance.mandatory", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"job.topics", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

