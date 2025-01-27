# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingEngineImplLogRequestLoggerInfo do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"pid",
    :"title",
    :"description",
    :"properties",
    :"bundle_location",
    :"service_location"
  ]

  @type t :: %__MODULE__{
    :"pid" => String.t,
    :"title" => String.t,
    :"description" => String.t,
    :"properties" => OrgApacheSlingEngineImplLogRequestLoggerProperties,
    :"bundle_location" => String.t,
    :"service_location" => String.t
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingEngineImplLogRequestLoggerInfo do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"properties", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingEngineImplLogRequestLoggerProperties, options)
  end
end

