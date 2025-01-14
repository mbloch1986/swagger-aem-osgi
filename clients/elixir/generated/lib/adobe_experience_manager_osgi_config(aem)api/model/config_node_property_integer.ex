# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"name",
    :"optional",
    :"is_set",
    :"type",
    :"value",
    :"description"
  ]

  @type t :: %__MODULE__{
    :"name" => String.t,
    :"optional" => boolean(),
    :"is_set" => boolean(),
    :"type" => integer(),
    :"value" => integer(),
    :"description" => String.t
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger do
  def decode(value, _options) do
    value
  end
end

