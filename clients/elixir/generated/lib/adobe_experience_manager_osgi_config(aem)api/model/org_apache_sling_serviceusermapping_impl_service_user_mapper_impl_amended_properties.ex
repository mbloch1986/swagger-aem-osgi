# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"service.ranking",
    :"user.mapping"
  ]

  @type t :: %__MODULE__{
    :"service.ranking" => ConfigNodePropertyInteger,
    :"user.mapping" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"service.ranking", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"user.mapping", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

