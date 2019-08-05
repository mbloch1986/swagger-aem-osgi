# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"scheduler.expression",
    :"scheduler.concurrent",
    :"chunk.cleanup.age"
  ]

  @type t :: %__MODULE__{
    :"scheduler.expression" => ConfigNodePropertyString,
    :"scheduler.concurrent" => ConfigNodePropertyBoolean,
    :"chunk.cleanup.age" => ConfigNodePropertyInteger
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"scheduler.expression", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"scheduler.concurrent", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"chunk.cleanup.age", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
  end
end
